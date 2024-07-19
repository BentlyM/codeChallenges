
class ListNode {
    constructor(data) {
        this.data = data
        this.next = null                
    }
}

class linkedList {
    constructor(head = null){
        this.head = head;
    }

    append(value){
        let newNode = new ListNode(value)
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

    prepend(value) {
        let newNode = new ListNode(value);
        if (!this.head) {
            this.head = newNode;
        } else {
            newNode.next = this.head;
            this.head = newNode;
        }
    }

    size() {
        let count = 0; 
        let node = this.head;
        while (node) {
            count++;
            node = node.next
        }
        return count;
    }

    getLast() {
        let lastNode = this.head;
        if (lastNode) {
            while (lastNode.next) {
                lastNode = lastNode.next
            }
        }
        return lastNode
    }

    getFirst() {
        return this.head;
    }
    
}

const list = new linkedList();
list.append("dog");
list.prepend('cat');
list.append('kitty');
console.log(list);