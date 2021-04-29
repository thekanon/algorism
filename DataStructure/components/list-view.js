customElements.define('list-view',
    class extends HTMLElement {
        constructor() {
            super();


            const template = document.createElement('template');
            template.innerHTML = `
                <div class="array">
                    <colgroup>
                        <col width="10%">
                        <col width="90%">
                    </colgroup>
                    <table>
                        <tbody>
                            <tr>
                                <td>1</td>
                                <td>2</td>
                            </tr>
                            <tr>
                                <td>1</td>
                                <td>2</td>
                            </tr>
                            <tr>
                                <td>1</td>
                                <td>2</td>
                            </tr>
                            <tr>
                                <td>1</td>
                                <td>2</td>
                            </tr>
                        </tbody>
                    </table>        
                </div>  
            `

            const templateContent = template.content;

            const shadowRoot = this.attachShadow({ mode: 'open' });

            const style = document.createElement('style');
            style.textContent = `
                * { color:white}
                .array { width:100% }
                td { border: 1px solid}
            
            `;

            shadowRoot.appendChild(style);
            shadowRoot.appendChild(templateContent);
        }
    }
);