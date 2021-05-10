const game = () => { console.log("game") }
const mySchedule = (etc) => {
  console.log("study");
	console.log("bike");
	return etc()
}
const todayMySchedule = ()=> mySchedule(game)
todayMySchedule()