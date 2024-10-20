
// while(true) {
    function updateclock() {

        const date = new Date();
        let hour = date.getHours();
        let minutes = date.getMinutes();
        let seconds = date.getSeconds();
        document.getElementById("container").textContent =`${hour}:${minutes}:${seconds}`;
    
    }
    updateclock();
    setInterval(updateclock, 1000);
// }
