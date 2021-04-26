window.onload = function() { 
    const li = document.querySelector('ul'); // header 객체에 onclick 이벤트 속성을 연결 
    li.onclick = function(e) { 
        const elId = e.target.parentElement.id;
        console.log(elId)
        switch (elId) {
            
            case "list":
                location.href = "./page/list.html"
                break;
        
            default:
                break;
        }
    } 


};