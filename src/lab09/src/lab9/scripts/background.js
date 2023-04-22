

window.addEventListener("keydown", event => {

    if (event.key == "l") {
        document.body.style.background = "white";
    }

});
// when you release your key it will stay whites 
window.addEventListener("keyup", event => {
    if (event.key == "l") {
        document.body.style.background = "";
    }
});

window.addEventListener("keydown", event => {
    if (event.key == "d") {
        document.body.style.background = "black";
    }

});

window.addEventListener("keyup", event => {
    if (event.key == "d") {
        document.body.style.background = "black";
    }
});