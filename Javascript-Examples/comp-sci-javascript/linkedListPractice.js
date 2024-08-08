
class NodeList { 
    constructor(data = null){
        this.data = data;
        this.next = null; 
    }
}

class LinkedList {
    constructor(head = null){
        this.head = head;
    }

    append(val){
        let newNode = new NodeList(val);
        if(!this.head){
            this.head = newNode;
        }else{
            let currentNode = this.head;
            while(currentNode.next){
                currentNode = currentNode.next;
            }

            currentNode.next = newNode;
        }

    }


    prepend(val){
        let newNode = new NodeList(val);
        if(!this.head){
            this.head = newNode;
        }else{
            newNode.next = this.head;
            this.head = newNode;                                            
        }
    }

    size(){
        let node = this.head

        while(node){
            
        }
    }
}


const list = new LinkedList();

const firstNode = new NodeList('data');

list.next = firstNode;

console.log(list)