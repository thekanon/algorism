customElements.define('list-view',
    class extends HTMLElement {
        makeListView() {
            let str = "";

            this.array.map((el, i) => str += `
            <tr>
                <td>`+ i + `</td>
                <td>`+ el + `</td>
            </tr>
            ` )

            return str;
        }
        constructor() {
            super();


            const template = document.createElement('template');

            this.array = ["하나", "둘", "셋", "넷", "파이브", "six"];

            const arrayData = this.makeListView()

            template.innerHTML = `
                <div class="array">
                    <h4>array name</h4>
                    <table>
                        <colgroup>
                            <col width="20%">
                            <col width="80%">
                        </colgroup>
                        <thead>
                            `+ arrayData + `
                        </tbody>
                    </table>        
                </div>  
            `

            const templateContent = template.content;

            const shadowRoot = this.attachShadow({ mode: 'open' });

            const style = document.createElement('style');
            style.textContent = `
                * { color:white }
                .array { margin: 40px }
                .array table { width:100%;text-align:center }
                .array h4 { text-align:center }
                td { border: 1px solid}
            
            `;

            shadowRoot.appendChild(style);
            shadowRoot.appendChild(templateContent);
        }
    }
);