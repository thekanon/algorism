var amt = 0;
var oldAmtId = ""
var amtArr = [];
function addAmt(){
    if(document.querySelector("#purchase-amount")){
        var el = document.querySelectorAll("#purchase-amount")[document.querySelectorAll("#purchase-amount").length-1].innerText
        var elId = document.querySelectorAll("#purchase-amount")[document.querySelectorAll("#purchase-amount").length-1].parentElement.parentElement.querySelector("#author-name").innerText
        if(el && elId !=oldAmtId){
            var strr = el
            strr = strr.replaceAll("₩","")
            strr = strr.replaceAll(",","")
            strr = parseInt(strr)
            if(!isNaN(strr)){
                oldAmtId = elId
                amt +=strr
                amtArr.push(strr)
                console.log(amt+" - add " +strr+" : "+elId)    
            }
        }    
    }
}
setInterval(addAmt, 100);