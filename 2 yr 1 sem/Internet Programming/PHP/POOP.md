```php
class Car {
	public $color;
	public $model;
	public function __construct($model, $color) {
		$this->color = $color
		$this->model = $model
	}
	public function message(){
		return "My car is a " . $this->color . " " . $this->model;
	}
}
$myCar = new Car("red","BMW");
```
When you create an object. PHP automatically calls the <b>__construct</b> which is used to instantiate the object.