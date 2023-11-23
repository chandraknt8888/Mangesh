<form method="post" action="">
    <span>Select Item</span><br/>
    <input type="checkbox" name='item[]' value="Rice"> Rice <br/>
    <input type="checkbox" name='item[]' value="Oils"> Oils <br/>
    <input type="checkbox" name='item[]' value="MIlk"> MIlk <br/>
    <input type="checkbox" name='item[]' value="Bread"> Bread <br/>

    <input type="submit" value="Submit" name="submit">
</form>



<!-- PHP code to establish connection with the localserver -->
<?php


// Username is root
$user = 'chandu1';
$password = 'chandu1';

// Database name is geeksforgeeks
$database = 'grecery';

// Server is localhost with
// port number 3306
$servername='localhost:3306';
$mysqli = new mysqli($servername, $user,
				$password, $database);

// Checking for connections
if ($mysqli->connect_error) {
	die('Connect Error (' .
	$mysqli->connect_errno . ') '.
	$mysqli->connect_error);
}
$result = '';
if(isset($_POST['item'])){
	$data = $_POST['item'];
	
	$data_array = "'" . implode ( "', '", $data ) . "'";

 if($data_array != ''){
	 $sql = "select * from bill where NameItem in (".$data_array.")";
	 $result = $mysqli->query($sql);
     $mysqli->close();
 }
}
?>
<!-- HTML code to display data in tabular format -->
<!DOCTYPE html>
<html lang="en">

<head>
	<meta charset="UTF-8">
	<title>GFG User Details</title>
	<!-- CSS FOR STYLING THE PAGE -->
	<style>
		table {
			margin: 0 auto;
			font-size: large;
			border: 1px solid black;
		}

		h1 {
			text-align: center;
			color: #006600;
			font-size: xx-large;
			font-family: 'Gill Sans', 'Gill Sans MT',
			' Calibri', 'Trebuchet MS', 'sans-serif';
		}

		td {
			background-color: #E4F5D4;
			border: 1px solid black;
		}

		th,
		td {
			font-weight: bold;
			border: 1px solid black;
			padding: 10px;
			text-align: center;
		}

		td {
			font-weight: lighter;
		}
	</style>
</head>

<body>
	<section>
		<h1>Grocery Bill</h1>
		<!-- TABLE CONSTRUCTION -->
		<table>
			<tr>
				<th>sr.no</th>
				<th>NameItem</th>
				<th>Quntity</th>
				<th>Rate</th>
				<th>Amount</th>
			</tr>
			<!-- PHP CODE TO FETCH DATA FROM ROWS -->
			<?php 
				// LOOP TILL END OF DATA
				if($result != ''){
				while($rows=$result->fetch_assoc())
				{
			?>
			<tr>
				<!-- FETCHING DATA FROM EACH
					ROW OF EVERY COLUMN -->
				<td><?php echo $rows['s.no'];?></td>
				<td><?php echo $rows['NameItem'];?></td>
				<td><?php echo $rows['Quntity'];?></td>
				<td><?php echo $rows['Rate'];?></td>
				<td><?php echo $rows['Amount'];?></td>
			</tr>
			<?php
				}}
			?>
		</table>
	</section>
</body>

</html>
