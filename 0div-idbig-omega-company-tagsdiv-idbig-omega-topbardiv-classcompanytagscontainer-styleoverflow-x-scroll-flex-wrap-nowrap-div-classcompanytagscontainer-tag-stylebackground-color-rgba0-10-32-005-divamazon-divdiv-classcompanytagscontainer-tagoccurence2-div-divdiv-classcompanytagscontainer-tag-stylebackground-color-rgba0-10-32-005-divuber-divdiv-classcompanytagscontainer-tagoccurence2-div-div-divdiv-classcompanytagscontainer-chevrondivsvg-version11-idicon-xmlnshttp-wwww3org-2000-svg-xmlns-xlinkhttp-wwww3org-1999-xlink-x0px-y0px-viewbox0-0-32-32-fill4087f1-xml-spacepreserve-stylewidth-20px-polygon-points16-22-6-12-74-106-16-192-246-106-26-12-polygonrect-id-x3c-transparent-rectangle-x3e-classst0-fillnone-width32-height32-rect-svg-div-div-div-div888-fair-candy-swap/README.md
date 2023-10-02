<h2><a href="https://leetcode.com/problems/fair-candy-swap/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Amazon</div><div class="companyTagsContainer--tagOccurence">2</div></div><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Uber</div><div class="companyTagsContainer--tagOccurence">2</div></div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>888. Fair Candy Swap</a></h2><h3>Easy</h3><hr><div><p>Alice and Bob have a different total number of candies. You are given two integer arrays <code>aliceSizes</code> and <code>bobSizes</code> where <code>aliceSizes[i]</code> is the number of candies of the <code>i<sup>th</sup></code> box of candy that Alice has and <code>bobSizes[j]</code> is the number of candies of the <code>j<sup>th</sup></code> box of candy that Bob has.</p>

<p>Since they are friends, they would like to exchange one candy box each so that after the exchange, they both have the same total amount of candy. The total amount of candy a person has is the sum of the number of candies in each box they have.</p>

<p>Return a<em>n integer array </em><code>answer</code><em> where </em><code>answer[0]</code><em> is the number of candies in the box that Alice must exchange, and </em><code>answer[1]</code><em> is the number of candies in the box that Bob must exchange</em>. If there are multiple answers, you may <strong>return any</strong> one of them. It is guaranteed that at least one answer exists.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> aliceSizes = [1,1], bobSizes = [2,2]
<strong>Output:</strong> [1,2]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> aliceSizes = [1,2], bobSizes = [2,3]
<strong>Output:</strong> [1,2]
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> aliceSizes = [2], bobSizes = [1,3]
<strong>Output:</strong> [2,3]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= aliceSizes.length, bobSizes.length &lt;= 10<sup>4</sup></code></li>
	<li><code>1 &lt;= aliceSizes[i], bobSizes[j] &lt;= 10<sup>5</sup></code></li>
	<li>Alice and Bob have a different total number of candies.</li>
	<li>There will be at least one valid answer for the given input.</li>
</ul>
</div>