<?php
    require('Shirt.php');

    $shirt1 = new Shirt("1", "Kemeja", "H&M", "Rp200.000", "XXL", "Katun", "Pria", "Merah", "Pendek");
    $shirt2 = new Shirt("2", "Baju", "Gucci", "Rp20.000.000", "XL", "Katun", "Wanita", "Putih", "Panjang");
    $shirt3 = new Shirt("3", "Baju", "ScH", "Rp150.000", "L", "Katun", "Pria", "Merah", "Pendek");
    
    $shirt = array();
    array_push($shirt, $shirt1);
    array_push($shirt, $shirt2);
    array_push($shirt, $shirt3);

    echo "<center>";
        echo "<table border='1'>";
        echo "<h2>DATA SHIRT</h2>";
        echo "<tr><th>ID</th><th>Nama</th><th>Brand</th><th>Price</th><th>Size</th><th>Material</th><th>Gender</th><th>Color</th><th>Sleeve Type</th></tr>";
        foreach ($shirt as $shr) {
            echo "<tr>";
            echo "<td style='text-align: center; width: 50px;'>" . $shr->getID() . "</td>";
            echo "<td style='text-align: center; width: 80px;'>" . $shr->getName() . "</td>";
            echo "<td style='text-align: center; width: 80px;'>" . $shr->getBrand() . "</td>";
            echo "<td style='text-align: center; width: 130px;'>" . $shr->getPrice() . "</td>";
            echo "<td style='text-align: center; width: 60px;'>" . $shr->getSize() . "</td>";
            echo "<td style='text-align: center; width: 80px;'>" . $shr->getMaterial() . "</td>";
            echo "<td style='text-align: center; width: 80px;'>" . $shr->getGender() . "</td>";
            echo "<td style='text-align: center; width: 80px;'>" . $shr->getColor() . "</td>";
            echo "<td style='text-align: center; width: 100px;'>" . $shr->getSleeve() . "</td>";
            echo "</tr>";
        }
        echo "</table>";
    echo "</center>";
?>
