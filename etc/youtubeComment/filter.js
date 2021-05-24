//댓글을 검사해서 한글이 포함되어있다면 남기고, 한글이 포함되어 있지 않다면 삭제하는 함수
function filterNotKor(){
    //한글 검사하는 정규식
    let korean = /[ㄱ-ㅎ|ㅏ-ㅣ|가-힣]/;

    //현재 보이는 댓글을 순회하면서 한글만 남기고 다 삭제한다.
    Object.values(document.querySelectorAll("#comment")).map( el => {
        if(!el.getAttribute("onclick"))
            el.setAttribute("onclick","viewComment(event)")
        //댓글 추출
        let string
        if(el.querySelector("#content-text")){
            string = el.querySelector("#content-text").innerText
        let result = korean.test(string)
        if(!korean.test(string))
                     el.parentComponent.remove()
            return [result,(string)]
        }
        return [false,"comment"]
    });
}
//0.1초마다 필터링 반복함.
setInterval(filterNotKor, 100);

function viewVideoList(e){
    if(document.querySelector("#secondary").clickFlag){
        document.querySelector("#secondary").style.zIndex=''
        document.querySelector("#secondary").style.background=""
        e.target.clickFlag = false;
    }else {
        document.querySelector("#secondary").style.zIndex='9999'
        document.querySelector("#secondary").style.background="white"
        e.target.clickFlag = true;
    }
}
function viewComment(e){
    console.log(e.target.tagName)
    if(e.target.tagName == "YT-FORMATTED-STRING" || e.target.tagName == "SPAN"){
        if(e.target.clickFlag){
            e.target.style.zIndex=''
            e.target.style.display= "";
            e.target.style.background= "";    
            e.target.clickFlag = false;
            e.target.style.position = "static";
        }else {
            e.target.style.position = "absolute";
            e.target.style.zIndex='9999';
            e.target.style.display= "block";
            e.target.style.background= "white";
            e.target.clickFlag = true;
        }
    }
}
//편의를 위한 CSS 변경
//영상 상단 고정
document.querySelector("#player.ytd-watch-flexy").style.position = "fixed"
//큰 화면일때 맞춤
// document.querySelector("#player.ytd-watch-flexy").style.width = "70%" 
//작은 화면일때 맞춤
document.querySelector("#player.ytd-watch-flexy").style.width = "100%" 
document.querySelector("#player.ytd-watch-flexy").style.left = "300px"
document.querySelector("#player.ytd-watch-flexy").style.top = "0";

//다른 요소가 안가리도록 함.
document.querySelector("#player.ytd-watch-flexy").style["z-index"] = 9999;

//클릭 이벤트
document.querySelectorAll("#secondary")[0].setAttribute("onclick","viewVideoList(event)")
if(document.querySelectorAll("#secondary").length==2)
    document.querySelectorAll("#secondary")[1].setAttribute("onclick","viewVideoList(event)")
