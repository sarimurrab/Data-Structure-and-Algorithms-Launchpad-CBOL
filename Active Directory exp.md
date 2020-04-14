Active Directory

Data structure used:
tree(list of list)- The list representing the subtree has the same structure as that of the tree

Operation:
we iterate over the contents of the group , if it matches to the user then true is returned else false

Time Complexity:
Let the size of  both the lists is n, in this recursive solution the complexity will depend both on number of groups as well as number of users in the group. 
time complexity is O(n^2)

Space Complexity:
Since we are not using any extra memory other than a flag variable (active_mem) so the space complexity will be O(1).
