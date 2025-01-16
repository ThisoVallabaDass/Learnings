var randomNumber1 = Math.floor(Math.random()*6)+1;
var randomImageSource1 ="dice"+randomNumber1+".png";
var imagesrc ="images/"+randomImageSource1;
var image1 =document.querySelectorAll("img")[0];
image1.setAttribute("src",imagesrc);   
var randomnumber2 =Math.floor(Math.random()*6)+1;
var imagesrc2 ="images/dice"+randomnumber2+".png";
document.querySelectorAll("img")[1].setAttribute("src",imagesrc2);
if(randomNumber1>randomnumber2){
    document.querySelector("h1").innerHTML="player 1 Wins";
}
else if(randomnumber2>randomNumber1){
    document.querySelector("h1").innerHTML="player 2 wins";
}
else{
    document.querySelector("h1").innerHTML="its a draw";
}