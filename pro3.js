var a = "vtxltkvbiaxkbltlnulmbmnmbhgvbiaxk"
var  b = '';
for(let i=0;i<a.length;i++){
  const x = a.charCodeAt(i);
  const newX = x+7;
  let charToAdd;
  if(x>=97&&x<=122){
    console.log(x);
    charToAdd = newX<=122 ? newX : (newX-123)+97;
  } else{
    charToAdd = newX<=90 ? newX : (newX-91)+65;
  }
  console.log(charToAdd, String.fromCharCode(charToAdd));
  b = b.concat(String.fromCharCode(charToAdd));
}
console.log(b);
