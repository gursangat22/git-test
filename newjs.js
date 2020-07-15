let age=8;
age=18;
console.log(age);

const e=9;
/* e=45; not works */
console.log(e);

const name='gursangat';
const isbool=true;
const rating=34.4;

console.log(typeof name);
console.log(typeof isbool);
console.log(typeof rating);
console.log(typeof age);

/* type of tells the data type amd here decimal 
integer are termed as numbers only */

console.log(name);
console.log(isbool);
console.log(rating);

console.log('my name is '+ name + 'and age is '+ age);
console.log(`my name is ${name} and age is ${age}`);

//STRINGS
let s='Sangat';
console.log(s.length);
console.log('s.length');
console.log(s.toUpperCase());
console.log(s.toLowerCase());

let a=s.length;
console.log(a);

console.log(s.substring(0,3).toUpperCase());

console.log(s.split(''));

// ARRAYS

const fruits=['apple','lichi','watermelon','1',1,true];
console.log(fruits);
console.log(fruits[2]);
console.log(fruits.indexOf('lichi'));



var me={
  firstname:'sangat',
  lastname:'singh',
  age:30,
  hobbies: ['music','dance','kite flying'],
  address:
  {
  street:'1232 dffd',
  city:'ludhiana',
} 

}


//alert(me);
console.log(me);

let ss=me.firstname;
console.log(ss);
console.log(me.lastname);

console.log(me.hobbies[0]);

// to get city
console.log(me.address.city)

// to add property
me.email='yaar@gmail.com';
console.log(me);
console.log(me.email);

var todojson= JSON.stringify(me);
console.log(todojson);
// down again converted to javascript

var obj=JSON.parse(todojson);
console.log(obj);

for(let i=0;i<=10;i++)
  {
    console.log('my number->'+ i+ ` added 1 ->${i+1}`);
  }
const arrays=['kd','kjd','dfdf','dfds'];
for(let ii=0;ii<arrays.length;ii++)
  {
    console.log(arrays[ii]);
  }

var x=10;

if (x===10)  //x==10 also works
  {
    console.log('x is 10');
  }
 else
   {
     console.log('x is not 10');
   }


   let as=12;
   var b=as>12?'red':'blue';
  // console.log(as>12?'red':'blue');

     switch(b)
       {
         case 'red':
           console.log('this is right');
           break;
         case 'blue':
           console.log('blue agyaa');
           break;
         default:
           console.log('kjdndkndc');
           break;
           
       }

   function add(n1,n2)
{
  console.log(n1+n2);
}

add(32,34);

         //constructor function
    function Person(first,last,dob)
   {
  this.first=first;
  this.last=last;
  this.dob=dob;
  this.fullname=function()
  {
    return this.first+' '+this.last;
  }
}  
     //below are the two objects
    var father=new Person('har','singh','45');
    var mother=new Person('bal','kaur',40);

      console.log(father);
       console.log(father.first);
   father.email='har@gmail.com';

console.log(father);
console.log(father.fullname());

var q=null;
console.log(typeof q);  //object

      class Student{
        constructor(first,last,dob)
        {
          this.first=first;
          this.last=last;
          this.dob=dob;
        }
       fullname()
        {
           return this.first+' '+this.last;
        }
      }
     
    var father=new Student('har','singh','45');
    var mother=new Student('bal','kaur',40);

 console.log(mother);
console.log(mother.fullname());
  

//console.log(window);

   // KING TERRITORY PROBLEMS

    //let king ='John'  //global
   
if(true)
  {
    //let king='Sam';
  
   
   if(true)
     {
    // var king='Ram'; this will work
     // let king='ramm';  this will not work oh let ode scope ch rje jana
        king='ramm';
       //vaiable leaking
       //this will work because koi let ni koi var ni 
       //console.log(king);
     }
  }

   if(true)
     {  //loophole ke outside bhi scope ke ram agya
       console.log('i am second '+king);
     }



   let global='global';
   let local= 'local';
if(true)
  {
     global='global  new';
     local= 'local111';
      //vaiable leaking
     console.log(global); 
     console.log(local);
  }


    console.log(global);
    console.log(local);



   const array=['kd','kjd'];
console.log(array);
console.log(array[1]);

array[1]='ijdbjeb';
console.log(array);
array.shift(); //1st element is deleted
console.log(array);
array.unshift('ndcnndk');
console.log(array);

let multiply=function(num1=9,num2=8)
{
     return  num1*num2;
}

   console.log(multiply(2,3));
//2,3 will overwrite inbuilt arguments

  const todo=[];
  todo.push('khariyat');
  todo.push('ja kabhi');
  todo.push('kab aega');

  todo.forEach(function(t,i)
  {
    console.log('my song is '+t+' at index-> '+(i+1));            
   })
   
  //TRELLO V2
  
  let meeting={
    day:'monday',
    meetings:0, //initially
    meetdone:0,  //initially
    
  // let newfun=function()
     newfun :function()
    {
      console.log(this);
    }
  }
  
  let addmeet=function(todo,nmeet)
  {
    todo.meetings=todo.meetings+nmeet;
    console.log(todo.meetings);
  }
  
  let meetdone=function(todo,nmeet)
  {
    todo.meetdone=todo.meetdone+nmeet;
    console.log(todo.meetdone);
  }
  
  let total=function(todo)
  {
    todo.meetings=todo.meetings-todo.meetdone;
    console.log(todo.meetings);
  }
 
  console.log(meeting);
  addmeet(meeting,10);
  meetdone(meeting,7);
  console.log('meetings left->');
  total(meeting);
  meeting.newfun();
  
  
  let useremail='njn';
  let password='12345';
   
  let userChecker=function(str)
  {
    if((str.includes(123))&&(str.length>6))
      {
        return true;
       }
      else
    {
      return false;
    }
  }
  
  console.log(userChecker('123gursa'));
  console.log(userChecker(password));


  console.log(Math.random());
 console.log(Math.random());
 console.log(Math.random());
 console.log(Math.random()*10+1);

  let upper =25;
  let lower=20;
  let my=Math.random()*(upper-lower)+10;
  console.log(Math.floor(my)); //highest 14 aega



  let obje={};
  let obj2={};

  console.log(obj==obj2);
  console.log(obj===obj2);
  let o='df';
  let p='df';
  console.log(o==p);
  console.log(o===p);
  
   // newtool is array of objects
   const newTool=[
     {
     title:'Buy Bread',
     isdone:false,
     },
     {
     title:'go to gym',
     isdone:false,
     },
     {
     title:'make videos',
     isdone:true,
     }
   ];
    
     let indexx=newTool.findIndex(function(todoo,indexx){
       console.log(todoo);
       //jad tak nhi miljanda particular sare printhonge odo tak todoo
       return todoo.title === 'make videos'
     })
     //this returns the indexx 
      console.log(indexx);
     
  const findfun= function(mytool,title)
  {
    const titlereturned=mytool.find(function(tool,index){
      return tool.title.toLowerCase()=== title.toLowerCase()
    })//tool will points to all the elements of arrays of objects
    return titlereturned;
  }

  let findd=findfun(newTool,'go TO Gym');
   console.log(findd);



 //ADVANCED_________
 
  const myfun=(name)=>{
    console.log('my name is '+ name);  
  }
   
  myfun('gursangat');

   // => is used to printf true only
  const funfilter=newTool.filter((todod)=>
   todod.isdone===true) 
   
  console.log(funfilter);



   console.log('5'+6);
   console.log('5'-5);
  
  console.log(true+10);
   console.log(true-10);
     console.log(false+10);
      console.log(10-false);
  
let yo='';  //this is false 
// {},[] this is truee
if(yo)
  {
    console.log('dknf');
  }
else
  {
    console.log('ndf');
  }
  


  