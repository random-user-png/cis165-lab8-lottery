# cis165-lab8-lottery

The inputs will be five integers from 0 through 9, inclusive. The variables are the arrays winningDigits and player. There are comparisons between the user-entered input and the randomly generated winning digits. The expected output consists of a display of the winning digits, the user-entered digits, and the digits that match between the two arrays.



The random expression keeps every digit between 0 and 9 by using the modulus operator to divide by 10 and taking the remainder of that operation.

A matching digit in another position does not count because the line "if (winningDigits[i] == player[i])" checks if the player-entered value matches the winningDigits with the same index.

If the winningDigits are [7,4,9,1,3] and the player-entered values are [4,2,9,7,3], the program will check at line 23 whether the values match, and it will skip the first two times because they don't, then the third time it will display a message stating the match. It will again skip the fourth time because the values don't match, but it will show the message again the fifth time because they do match.

Array loops stop before SIZE because it starts at index 0, and goes up to index SIZE-1.



|Test / data|Expected result|Actual result|
|-|-|-|
|Fixed winning [7,4,9,1,3]; player [4,2,9,7,3]|2 matches.|2 matches.|
|Same fixed winning array; player [7,4,9,1,3]|5 matches.|5 matches.|
|Same fixed winning array; player [0,0,0,0,0]|0 matches.|0 matches.|
|Fixed winning [1,1,2,2,3]; player [1,2,2,3,3]|3 matches; repeated digits are compared by position.|3 matches; repeated digits are compared by position.|
|Fixed winning [1,1,1,6,6]; player [2,0,2,6,6]|2 matches, 6 (index 3) and 6 (index 4). Indexes 0 through 2 are not being matched because they contain different values (comparing 1 and 2; 1 and 0; 1 and 2).|2 matches, 6 (index 3) and 6 (index 4). Indexes 0 through 2 are not being matched because they contain different values (comparing 1 and 2; 1 and 0; 1 and 2).|
|Final random-generation run|Winning [2,3,1,0,2]; player [7,1,3,5,9]|2 and 7 don't match; 3 and 1 don't match; 1 and 3 don't match; 0 and 5 don't match; 2 and 9 don't match.|
