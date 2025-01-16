var drumButtons = document.querySelectorAll(".drum");
var numberOfDrumButtons = drumButtons.length;

for (var i = 0; i < numberOfDrumButtons; i++) {
    drumButtons[i].addEventListener("click", function () {
        var buttonInnerHTML = this.innerHTML;
        makesound(buttonInnerHTML);
    });

        document.addEventListener("keypress",function(event){
            makeSound(event.key);
        });
        

    function makeSound(key){
        switch (key) {
            case "w":
                var audio = new Audio("sounds/crash.mp3");
                break;
            case "a":
                var audio = new Audio("sounds/tom-1.mp3");
                break;
            case "s":
                var audio = new Audio("sounds/tom-2.mp3");
                break;
            case "d":
                var audio = new Audio("sounds/tom-3.mp3");
                break;
            case "j":
                var audio = new Audio("sounds/snare.mp3");
                break;
            case "k":
                var audio = new Audio("sounds/kick-bass.mp3");
                break;
            case "l":
                var audio = new Audio("sounds/tom-4.mp3");
                break;
            default:
                return; // Exit if no valid key
        }
        audio.play();
    }

    }

