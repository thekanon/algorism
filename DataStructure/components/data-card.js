customElements.define('data-card',
  class extends HTMLElement {
    constructor() {
      super();

      const template = document.createElement('template');
      template.innerHTML = `
        <div class="data_card">
            <h3><slot name="card-title"></slot></h3>
            <div class="card_header"> <slot name="card-header"></slot> </div>
            <div class="card_main"> <slot name="card-main">MAIN MISSING</slot> </div>
            <div class="card_footer"> <slot name="card-footer"></slot> </div>
        </div>  
      `

      const templateContent = template.content;

      const shadowRoot = this.attachShadow({mode: 'open'});

      const style = document.createElement('style');
      style.textContent = `
        * { color:white}
        .data_card { padding: 10px; border: 1px solid white; width: 98%; margin: 10px; }
        h3 { margin: 0 0 10px; }
        ul { margin: 0; }
        p { margin: 10px 0; }
      `;

      shadowRoot.appendChild(style);
      shadowRoot.appendChild(templateContent);
    }
  }
);