console.log(`hello world`);
// console.log(`it only takes two weeks`);

//window.alert('hello world');
let radius;

document.getElementById("myh1").textContent ="Enter the radius of the circle";
// document.getElementById("myP").textContent ="this is getting irritating";

document.getElementById("submit").onclick = function() {
    radius = document.getElementById("input").value;
    let area = radius * 3.14 * radius;
    document.getElementById("result").textContent = `Area: ${area}`;
}

