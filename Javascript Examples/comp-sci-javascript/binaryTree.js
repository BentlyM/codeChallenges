class TreeNode {
    constructor(val){
        this.val = val;
        this.left = null;
        this.right = null;
    }
}

class Tree {
    constructor(root = null){
        this.root = root;
    }

    isLeafNode(node) {
        return !node.left && !node.right;
    }

    search(root, target){
        if (!root) return null;

        if(target > root['val']){
            return this.search(root.right, target);
        }else if(target < root['val']){
            return this.search(root.left, target);
        }else{
            return root;
        }
    }

    insert(root, val){
        if(!root) return new TreeNode(val);

        if(val < root['val']){
            root.left = this.insert(root.left, val);
        }else if(val > root['val']){
            root.right = this.insert(root.right, val);
        }

        return root;
    }

    findMinimum(root){
        let curr = root;
        while(curr && curr.left){
            curr = curr.left;
        }

        return curr;
    }
    
    remove(root, val){
        if(!root) return null;

        if(val > root['val']){
            root.right = this.remove(root.right, val);
        }else if(val < root['val']){
            root.left = this.remove(root.left, val);
        }else{
            if(!root.left){
                return root.right;
            }else if(!root.right){
                return root.left;
            }else{
                let minNode = this.findMinimum(root.right);
                root['val'] = minNode.val;
                root.right = this.remove(root.right, minNode.val);
            }
        }

        return root;
    }

    order(root){
        if (!root) return;
        this.order(root.left);
        console.log(root['val']);
        this.order(root.right);
    }
}


const root = new TreeNode('6');
const node2 = new TreeNode('10');
const node3 = new TreeNode();
node2.left = node3;

const binaryTree = new Tree(root);


console.log(binaryTree.insert(root, node2['val']))
console.log(binaryTree.findMinimum(root))