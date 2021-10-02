<?php
        $host = 'db';

        $user = 'test';

        $pass = 'test';

        $conn = new mysqli($host, $user, $pass);
        if ($conn->connect_error) {
            die("Connection failed: " . $conn->connect_error);
        } else {
            echo "Connected to MySQL server successfully!";
        }

        echo "<br>your MYSQL client version is -> ";
        echo mysqli_get_client_version();
        echo "<br>your MYSQL server version is -> ";
        echo $conn -> server_version;
?>

