customElements.define('list-view',
    class extends HTMLElement {
        makeList() {
            let str = "";

            this.array.map((el, i) => str += `
            <tr>
                <td>`+ i + `</td>
                <td>`+ el + `</td>
            </tr>
            ` )

            return str;
        }
        makeListView(){
            if(this.shadowRootObj.querySelector(".array")){
                this.shadowRootObj.removeChild(this.shadowRootObj.querySelector(".array"));
                this.shadowRootObj.removeChild(this.shadowRootObj.querySelector("style"));    
            }
            const arrayData = this.makeList()

            this.template.innerHTML = `
                <div class="array">
                    <h4>array name</h4>
                    <table>
                        <colgroup>
                            <col width="20%">
                            <col width="80%">
                        </colgroup>
                        <tbody>
                            `+ arrayData + `
                        </tbody>
                    </table>        
                </div>  
            `

            this.templateContent = this.template.content;
            const style = document.createElement('style');
            style.textContent = `
                * { color:white }
                .array { margin: 40px }
                .array table { width:100%;text-align:center }
                .array h4 { text-align:center }
                td { border: 1px solid}
            `;

            this.shadowRootObj.appendChild(style);
            this.shadowRootObj.appendChild(this.templateContent);
        }
        pushArray(e,data){
            this.array.push(data);
            this.makeListView();
            console.log(this.array)
        }
        popArray(){
            this.array.pop();
            this.makeListView();
            console.log(this.array)
        }
        async insertArray(e, idx,data){
            console.log(idx,data)
            //data 이후 모든 값을 1칸씩 민다.
            this.array.push('');
            await this.sleep(500).then(() => this.makeListView())
            let i=this.array.length-1
            while(i>idx){
                this.array[i]=this.array[i-1]
                console.log(i)
                this.makeListView()
                await this.sleep(500).then(() => i-=1)
            }
            this.array[idx]=data;
            this.makeListView()
        }
        renderView(){
            setTimeout(() => {
                console.log("11")
                this.makeListView();
            }, this.timeout);
        }
        deleteArray(e,data){
            console.log(data)
            this.makeListView();
        }
        sleep(ms) {
            return new Promise((r) => setTimeout(r, ms))
        }
        constructor() {
            super();
            this.timeout = 1000;
            this.shadowRootObj = this.attachShadow({ mode: 'open' });
            this.array = ["하나", "둘", "셋", "넷", "파이브", "six"];

            this.template = document.createElement('template');
            this.templateContent = '';
            this.makeListView();
        }
    }
);