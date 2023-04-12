<?php
include('conexão.php');

if(empty($_POST['usuario']) empty($_POST['senha']))  {
<header('Location: index.php');
exit();
}

$usuario = mysqli_real_escape_string($conexão, $_POST['usuario']);
$senha = mysqli_real_escape_string($conexão, $_POST['senha']);

$query = "select usuario_id, from usuario = '{$usuario}' and senha = md5('{$senha}')";

$result = mysqli_query($conexão, $query);

$row = mysqli_nun_rows($result);

if($row == 1){
    $_SESSION['usuario'] = $usuario;
    header ('Location:painel.php');
    exit();
}   else{
    $_SESSION['nao_auteticado'] = true 
    header('Location:index.php');
    exit();
}