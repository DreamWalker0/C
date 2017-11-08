consol.log("running");

var AVariable;

var i = 77;
var pi= 3.1415;

var str="bbvjvh";

var t=true; //boolean

var array = [1,2,3];

var obj = {a:1, b:2};

var fn= foo(){};

console.log("typeof(t)", typeof(t));

9/5 //operations give float results in js

2==2// comparate for true of false

2=="2"//will give true

2==="2"// will give false bacause it is comparating the type of data too

2!==2// strict iqual they are not equal

var greeting = "hello";
var name = "Bob";
var totalGreeting = greeting + name;// concatenate strings

var problem = "2+2 =";
var answer = 4;
var completeAnswer = problem+answer;

console.log("completeAnswer[4]:", completeAnswer[4]);//go to that index in the string

console.log("Love dogs".".replace('dogs',''cats) ", "love dogs".replace("dogs","cats"));//just replace the first instance of the string

var array1 =[1, 2, 3];
var array1 =[1, false, "three"];//dont need to be the same type

for (var i=0; i<array1.length; i++)
{
  console.log("print stuff");
}

console.log("'1,2,3,4.split(',')'","1,2,3,4".split(',') );
console.log("'1,2,3,4.split(',')'","1,2,3,4".join(',') );

array2.forEach(someFunction);

array1.push(4);
array1.pop();
array1.unshift(-4);//add values to front
array1.shift();//eliminate valeu infrot

array2.forEach(function(element){
  console.log(element);
});

var dog={
  nameF:"loki",
  nameL: "sar",
  age: 10,
  getFullName:(){
    return this.nameF + " " + nameL;
  }
};

console.log(dog["nameF"]);
console.log(dog.nameF);
