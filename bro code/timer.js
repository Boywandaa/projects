
// window.alert("hello");
const start = document.getElementById("start");
const stopclock = document.getElementById("stop");
const reset = document.getElementById("reset");

function updatetimer() {
    const date = new Date();
    let hours = date.getHours();
    let minutes = date.getMinutes();
    let seconds = date.getSeconds();
    let milli = date.getMilliseconds();

    let timestring = `${hours}:${minutes}:${seconds}:${milli}`;
    document.getElementById("timer").textContent = timestring;

}


start.onclick = function updateclock() {
    updatetimer();
    setInterval(updateclock, 1000);

}
stop.onclick = function stopclock() {
    const date = new Date();
    let hours = date.setHours(0);
    let minutes = date.setMinutes(0);
    let seconds = date.setSeconds(0);
    let milli = date.setMilliseconds(0);
    let timestring = `${hours}:${minutes}:${seconds}:${milli}`;
    document.getElementById("timer").textContent = timestring;


}

