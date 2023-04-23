public class LinearSearchString {
    static boolean isPresent(String s,char c){
        boolean present=false;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i) == c){
                present = true;
                break;
            }
        }
        return present;
    }
    public static void main(String[] args) {
        String name="Kailash Subramanian";
        char target='m';
        System.out.println(isPresent(name, target));
    }
}
