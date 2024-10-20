

const ctof = document.getElementById("ctof")
const ftoc = document.getElementById("ftoc")
const submit = document.getElementById("submit")
const textbook = document.getElementById("textbook")



document.getElementById("submit").onclick = function() {
    if (ctof.checked) {
        let result = (9/5 * Number(textbook.value)) + 32;
        textbook.value = result;
    }
    if (ftoc.checked) {
        let result = (Number(textbook.value) - 32) * 5/9;
        textbook.value = result;
    }
    
}