<?php
    require('Clothing.php');

    class Shirt extends Clothing{
        private $color = '';
        private $sleeve_type = '';

        public function __construct($idProduct = '', $name = '', $brand = '', $price, $size = '', $material = '', $gender = '', $color = '', $sleeve_type = ''){
            parent::__construct($idProduct, $name, $brand, $price, $size, $material, $gender);
            $this->color = $color;
            $this->sleeve_type = $sleeve_type;
        }

        public function getColor(){
            return $this->color;
        }

        public function setColor($color){
            $this->color = $color;
        }

        public function getSleeve(){
            return $this->sleeve_type;
        }

        public function setSleeve($sleeve_type){
            $this->sleeve_type = $sleeve_type;
        }
    }
?>