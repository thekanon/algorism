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
        constructor() {
            super();
            this.shadowRootObj = this.attachShadow({ mode: 'open' });
            this.array = ["하나", "둘", "셋", "넷", "파이브", "six"];

            this.template = document.createElement('template');
            this.templateContent = '';
            this.makeListView();
        }
    }
);