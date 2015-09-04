class Motor {
  private:
  int minValue = 0;
  int maxValue = 0;
  int currentPos = 0;

  public:
  Motor(int minVal, int maxVal) {
    minValue = minVal;
    maxValue = maxVal;
    currentPos = minVal;
  }
  void move(int amount) {
    currentPos += amount;
    
    // contrloamos los limites:
    if (currentPos < minValue) {
      currentPos = minValue;
    }
    if (currentPos > maxValue) {
      currentPos = maxValue;
    }
    
    // move motor here.
    // motor.sendcommand(pos)
    
  }
  int getPos() {
    return currentPos;
  }
};

