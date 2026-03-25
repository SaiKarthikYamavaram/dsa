package org.karthik


class GroupAnagram {
    fun groupAnagrams(strs: Array<String>): List<List<String>> {

        val m = mutableMapOf<String,MutableList<String>>()
        for (i in strs) {
            val l = MutableList<Int>(26){ 0}
            for ( j in i) {
                val w: Int = (j- 97).toInt()
                l[w] += 1
            }
            var s = ""
            for(j in l) {
                s = s+ "${j},"
            }
            if(m[s] != null){
                m[s]?.add(i)
            }else {
            m[s] = mutableListOf(i)
            }

        }

        return m.values
               .toList()

    }
}
