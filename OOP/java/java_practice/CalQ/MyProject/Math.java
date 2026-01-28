class Math {
    double n1;
    double n2;
    double result;
    String op;

    public void calQ(double n1, double n2, String op) {
        this.n1 = n1;
        this.n2 = n2;
        this.op = op;

        switch (op) {
            case "+":
                result = n1 + n2;
                break;
            case "-":
                result = n1 - n2;
                break;
            case "*":
                result = n1 * n2;
                break;
            case "/":
                if(n2 > n1)
                    System.out.println("Invalid");
                else
                    result = n1 / n2;
                break;
            default:
                System.out.println("Invalid operator!");
                return;
        }

        // if(result == 2){
        //     while(true){
        //         for(int i = 1; i < 5; i++){
        //             System.out.print("\t Hi Cherry \t");
        //         }
        //     }
        // }
        // else
        //     System.out.println("Result: " + result);
    }
}