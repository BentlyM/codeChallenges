class ListNode {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}

class LinkedList {
  constructor(head = null) {
    this.head = head;
  }

  append(value) {
    let newNode = new ListNode(value);
    if (!this.head) {
      this.head = newNode;
    } else {
      let currentNode = this.head;
      while (currentNode.next) {
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
      node = node.next;
    }
    return count;
  }

  getLast() {
    let lastNode = this.head;
    if (!lastNode) {
      return null;
    }
    while (lastNode.next) {
      lastNode = lastNode.next;
    }
    return lastNode;
  }

  getFirst() {
    return this.head ? this.head : null;
  }
}

const node1 = new ListNode('1');
const node2 = new ListNode('2');
const node3 = new ListNode('3');
node1.next = node2;
node2.next = node3;

const list = new LinkedList(node1);

console.log(list.size());