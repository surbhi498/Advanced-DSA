# String Applications
  <pre>
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/String/9.%20Max%20difference%20of%20zeros%20and%201s.cpp">Maximum diff of zeros and ones</a></b>
    1 1 0 0 0 0 1 0 0 0 1
        |_ _ _ _ _ _ _ |
        When we get zeros and ones prob convert 1 -> -1
                                                0 ->  1
                                                
        Apply Kadane's algo for finding max subarray
    
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/String/4.%20Remove%20kth%20digits%20from%20number.cpp">Remove K digits from given string to make smaller number</a></b>
    Cases:
     1. Pop the elements in non-ascending order using string as efficient instead of stack
     2. Remove the leading zeros if it contains
     3. If string is in ascending order, then 1st case can't work to overcome that, pop last elements 
        for smaller number
        
   <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/String/13.%20Next%20permutation.cpp">Next Permuation</a></b>
          <img alt="Gif" width="550" height="200" src="https://github.com/teja963/DSA_All_Models/blob/master/String/images/31_Next_Permutation.gif">
          
   <b>Imp:</b> <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/String/18.%20Vowels%20of%20all%20substrings.cpp">Vowels of all substrings</a></b>                <b>Application:</b> <b><a href="https://www.hackerrank.com/challenges/the-minion-game/problem?isFullScreen=true">Minion game question</a></b>          <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/String/18.%20Minion%20Game.py">Solution</a></b>
      eg: abea                           a  b  e  a
          a ab abe abea                        ith is vowel
          b be bea                                 |
          e ea                               left / \ right
          a                                  (i+1)     (n - i) times it repeates in substring
                                       ending with     starting with
                                     ith character      ith character substring
          
   <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/String/34.%20Exactly%20one%20swap.cpp">Exactly one swap</a></b>
     i
   g e e k                if we take g (egek, eegk ,keeg)
                          similiarly if we take frst e(geek, gkee)
   for ith character we know (n - i -1)swaps are possible among those we need to reduce duplicate cases
   so if we swap e with e, then it can't be distnict string so use map to update frequencies 
   m[s[i]]--;   //it will remove duplicate characters swaping
   ans += (n - i - 1 - m[s[i]])
   <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/String/25.%20Next%20Highest%20Palindrome.cpp">Next Highest Palindrome in O(N Log N)</a></b>
      i/p: 3 5 4 5 3
      o/p: 5 3 4 3 5
        if frst_half part is highest than actual frst_half then it is to get next highest
        use next_permutation of that actual frst_half
        
   <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/String/28.%20Longest%20common%20Prefix%20in%20array.cpp">Longest common prefix</a></b>
     prefix = a[0];
     while traversing array of strings update prefix
     
   <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Sliding%20Window/4.%20Count%20anagrams.cpp">Count Anagram</a></b> or <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/String/29.Permutation%20in%20String.cpp">Permuation in string</a></b>
    Same concept application of anagrams
    If s1's pemutation is present in s2, if permutations equal means sort(s1) == sort(s2)
    In Simple way without sorting use map m1 == m2, then permutation of s1 is present in s2
    
   <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/String/32.%20Group%20Special%20Equivalent%20string.cpp">Group Special equivalent string</a></b>
   2 strings are special equivalent such that s1 == s2,
   s1: abcd     s2: adcb
   we can make any no.of swaps of even or odd characters to check its equal means,
   odd characters and even charcters are same so, convert every string to 
   s: sort (odd_characters) + sort ( even_characters)
   
   
  </pre>
# Note
  <pre>
  string matching usage
  s.find(tmp)!=string::npos     //string::npos is end of string
  
    Integer to roman just make array of 
    units-------|
    tens--------|_ _ _  add digits place of all the 4 arrays
    hundreds----|
    thousands---|
    
    while implementing backtracking right logic and use recursion effectively
  </pre>
