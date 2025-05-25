/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */

// @lc code=start
bool isPalindrome(int x) {
    char str1[30];
    char str2[30];
    int len;
    if(x < 0){
        return false;
    }

    sprintf(str1, "%d", x);
    len = strlen(str1);
    for(int i = 0; i < len; i++){
       str2[len-1-i] = str1[i];
    }
    str2[len] = '\0';
   return (strcmp(str1, str2) == 0);
}
// @lc code=end

