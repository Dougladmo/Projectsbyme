function change_image(image) {

    var container = document.getElementById("main-image");

    container.src = image.src;
}
document.addEventListener("DOMContentLoaded", function (event) {
});
const cep = document.querySelector("#cep")

const showData = (result) => {
    for (const campo in result) {
        if (document.querySelector("#" + campo)) {
            document.querySelector('#' + campo).value = result[campo]

        }
    }
}

calcular.onclick = function () {
    let search = cep.value.replace("-", "")
    const options = {
        method: 'GET',
        mode: 'cors',
        cache: 'default'
    }

    fetch(`https://viacep.com.br/ws/${search}/json/`, options)
        .then(response => {
            response.json()
            .then(data => showData(data))
        })
        .catch(e => showData('ERROR' + e, message))
}
calcular.onclick = function () {
    if (document.getElementById("uf").value == 'PA') {
        window.alert("O valor do frete pelos correios é R$10,00")
    }
    else if (document.getElementById("uf").value == 'AP') {
        window.alert("O valor do frete pelos correios é R$10,00")
    }
    else if (document.getElementById("uf").value == 'AM') {
        window.alert("O valor do frete pelos correios é R$20,00")
    }
    else if (document.getElementById("uf").value == 'SP') {
        window.alert("O valor do frete pelos correios é R$35,00")
    }
    else if (document.getElementById("uf").value == 'RJ') {
        window.alert("O valor do frete pelos correios é R$35,00")
    }
    else if (document.getElementById("uf").value == 'MG') {
        window.alert("O valor do frete pelos correios é R$25,00")
    }
    else if (document.getElementById("uf").value == 'MT') {
        window.alert("O valor do frete pelos correios é R$25,00")
    }
    else if (document.getElementById("uf").value == 'SC') {
        window.alert("O valor do frete pelos correios é R$40,00")
    }
    else {
        window.alert("O valor do frete pelos correios é R$30,00")
    }
}
