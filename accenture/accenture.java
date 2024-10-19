import java.util.*;

public class accenture {

    public static void main(String [] args){


        String s = "qczcquu";
        int n = s.length();
        
        int  i =0 ;
        int j = i+1;
        int cnt = 0;
        String ans = "";
        while(j<n){
        
        
        if(s.charAt(i) == s.charAt(j)){
        cnt++;
        ans+=s.charAt(i);
        i = j +1;
        j = j + 1;
        }
        
        j++;
        
        
        }
       System.out.println(ans);
        

    }
    
}
