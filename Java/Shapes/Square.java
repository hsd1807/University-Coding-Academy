class Square extends Rectangle {
    double side;

    public Square(int a) {
        super(a, a);
        side = a;
    }

    public void shapeName() {
        System.out.println("Square");
    }
}
