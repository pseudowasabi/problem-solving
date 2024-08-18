// merge-strings-alternately
class Solution {
    fun mergeAlternately(word1: String, word2: String): String {
        var i = 0; var j = 0
        val mergedString: StringBuilder = StringBuilder()
        while (i < word1.length || j < word2.length) {
            if (i < word1.length)
                mergedString.append(word1[i])
            if (j < word2.length)
                mergedString.append(word2[j])
            i++; j++
        }
        return mergedString.toString()
    }
}