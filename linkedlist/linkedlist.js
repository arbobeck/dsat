class Node {
  constructor(data, next = null){
    this.data = data;
    this.next = next;
  }
}

function main(){
  const headNode = new Node(10, new Node(20, new Node(30, new Node(40, new Node(50, null)))));

  console.log("My Linked List: ");

  let first = "";
  let tempNode = headNode;

  while (tempNode !== null){
    first = first + tempNode.data + "\t";
    tempNode = tempNode.next;
  }
  console.log(first)
}

function averageOfElements(headNode){
  let count = 0;
  let sum = 0;

  while (headNode !== null){
    count++;
    sum += headNode.data;
    headNode = headNode.next;
  }

  const average = sum / count;
  return average;

}

main();
console.log("The average is: ", averageOfElements(headNode));
