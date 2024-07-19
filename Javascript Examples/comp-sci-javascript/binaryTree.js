class TreeNode {
    constructor(val){
        this.val = val;
        this.left = null;
        this.right = null;
    }
}

class Tree {
    constructor(root){
        this.root = root;
    }
}



const firstNode = new TreeNode('2');
const secondNode = new TreeNode('4');

firstNode.right = secondNode;

const binaryTree = new Tree(firstNode);


console.log(binaryTree);