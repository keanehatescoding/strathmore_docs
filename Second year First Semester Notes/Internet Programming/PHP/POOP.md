```php
class Car {
	public $color;
	public $model;
	public function __constructor($model, $color) {
		$this->color = $color
		$this->model = $model
	}
	public function message(){
		return "My car is a " . $this->color . " " . $this->model;
	}
}
$myCar = new Car("red","BMW");
```