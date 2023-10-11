class Shop {
    public static void main(String[] args) {
        int[] price = {18, 17, 33, 35};
        String[] vegetables = {"potato", "carrot", "cucumber", "tomato"};
        for (int i = 0; i < vegetables.length; i++){
            System.out.println(vegetables[i] + ": " + price[i]);
        }
    }
}