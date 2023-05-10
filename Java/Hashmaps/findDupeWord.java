package Hashmaps;
import java.util.*;
import java.util.Map.Entry;
public class findDupeWord {
    
    public static void main(String[] args) {
        HashMap<String, Integer>hm=new HashMap<>();
        String s="the me is residing in the that as me, talking to me through that me";
        s=s.toLowerCase();
        for(String word:s.split(" ")){
            if(hm.containsKey(word)){
                hm.put(word,hm.get(word)+1);
            } else{
                hm.put(word,1);
            }
        }
        // Hashmap now has words with the count
        for(Entry<String,Integer>entry:hm.entrySet()){
            if(entry.getValue()>1){
                System.out.println("Duplicate word is : "+entry.getKey());
            }
        }
    }
}
