<h2><a href="https://leetcode.com/problems/take-gifts-from-the-richest-pile/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag">No companies found for this problem</div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>2558. Take Gifts From the Richest Pile</a></h2><h3>Easy</h3><hr><div><p>You are given an integer array <code>gifts</code> denoting the number of gifts in various piles. Every second, you do the following:</p>

<ul>
	<li>Choose the pile with the maximum number of gifts.</li>
	<li>If there is more than one pile with the maximum number of gifts, choose any.</li>
	<li>Leave behind the floor of the square root of the number of gifts in the pile. Take the rest of the gifts.</li>
</ul>

<p>Return <em>the number of gifts remaining after </em><code>k</code><em> seconds.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> gifts = [25,64,9,4,100], k = 4
<strong>Output:</strong> 29
<strong>Explanation:</strong> 
The gifts are taken in the following way:
- In the first second, the last pile is chosen and 10 gifts are left behind.
- Then the second pile is chosen and 8 gifts are left behind.
- After that the first pile is chosen and 5 gifts are left behind.
- Finally, the last pile is chosen again and 3 gifts are left behind.
The final remaining gifts are [5,8,9,4,3], so the total number of gifts remaining is 29.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> gifts = [1,1,1,1], k = 4
<strong>Output:</strong> 4
<strong>Explanation:</strong> 
In this case, regardless which pile you choose, you have to leave behind 1 gift in each pile. 
That is, you can't take any pile with you. 
So, the total gifts remaining are 4.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= gifts.length &lt;= 10<sup>3</sup></code></li>
	<li><code>1 &lt;= gifts[i] &lt;= 10<sup>9</sup></code></li>
	<li><code>1 &lt;= k &lt;= 10<sup>3</sup></code></li>
</ul>
</div>