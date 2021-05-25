var amt = 0;
var oldAmtId = ""
var amtArr = [];
function addAmt(){
    var el = document.querySelector(".style-scope yt-live-chat-ticker-paid-message-item-renderer")
	if(el && el.id !=oldAmtId){
		var strr = el.ariaLabel
		strr = strr.replaceAll("₩","")
		strr = strr.replaceAll(",","")
		strr = parseInt(strr)
		amt +=strr
        amtArr.push(strr)
	}
    console.log(amt)
}
setInterval(addAmt, 1000);