public class StringSearch {

    public static void main(String[] args) {
        
        StringSearch search = new StringSearch();
        
        System.out.println("isSubString(\"The\", \"The cat in the hat.\") is " + search.isSubString("The", "The cat in the hat."));
        System.out.println("isSubString(\"hat\", \"The cat in the hat.\") is " + search.isSubString("hat", "The cat in the hat."));
        System.out.println("isSubString(\"bat\", \"The cat in the hat.\") is " + search.isSubString("bat", "The cat in the hat."));
    }

    public boolean isSubString(String str, String strArr) {
        int strLength = str.length();
        int strArrLength = strArr.length();

        for (int i = 0; i < strArrLength; i++) 
        {         
        	int ctr = 0;
            for (int j = 0; j < strLength; j++) 
            {
                if (strArr.charAt(i + j) != str.charAt(j))
                    break; 
                ctr++;
            }
            
            if (ctr == strLength) 
                return true;
        }

        return false;
    }
}
