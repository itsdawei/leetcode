# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution(object):
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        stack = []
        prev = None
        while root is not None or len(stack) != 0:
            if root is not None:
                stack.append(root)
                root = root.left
            else:
                root = stack.pop()
                if prev and prev.val >= root.val:
                    return False
                prev = root
                root = root.right
        return True
