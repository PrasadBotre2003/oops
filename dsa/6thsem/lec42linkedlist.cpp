 package com.example.unitconv

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.width
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.ArrowDropDown
import androidx.compose.material3.Button
import androidx.compose.material3.DropdownMenu
import androidx.compose.material3.DropdownMenuItem
import androidx.compose.material3.Icon
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.OutlinedTextField
import androidx.compose.material3.Surface
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.example.unitconv.ui.theme.UnitconvTheme

 class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {
            UnitconvTheme {
                // A surface container using the 'background' color from the theme
                Surface(
                    modifier = Modifier.fillMaxSize(),
                    color = MaterialTheme.colorScheme.background
                ) {
                 unitconverter()
                }
            }
        }
    }
}

@Preview(showBackground = true)
@Composable
fun unitconverter() {
    Column(modifier = Modifier
        .fillMaxWidth()
        .padding(10.dp), verticalArrangement = Arrangement.Center) {
        Text(text = "Unit Converter",Modifier.padding(10.dp))
        OutlinedTextField(value = "", onValueChange = {})


        Row(modifier = Modifier.padding(10.dp)) {


            Box(modifier = Modifier.padding(5.dp)) {
  Button(onClick = { /*TODO*/ }) {
      Text(text = "select")
      Icon(Icons.Default.ArrowDropDown, contentDescription = "")
  }
                DropdownMenu(expanded = false, onDismissRequest = { /*TODO*/ }) {
                    DropdownMenuItem(text ={ Text("Centimeter")},
                        onClick = { /*TODO*/ })

                    DropdownMenuItem(text ={ Text("meter ")},
                        onClick = { /*TODO*/ })


                    DropdownMenuItem(text ={ Text("feet")},
                        onClick = { /*TODO*/ })

                    DropdownMenuItem(text ={ Text("milimeter")},
                        onClick = { /*TODO*/ })
                }
            }
Spacer(modifier = Modifier.width(10.dp))
            Box(modifier = Modifier.padding(5.dp)) {
                Button(onClick = { /*TODO*/ }) {
                    Text(text = "select")
                    Icon(Icons.Default.ArrowDropDown, contentDescription = "")

                 }
                DropdownMenu(expanded = false, onDismissRequest = { /*TODO*/ }) {
                    DropdownMenuItem(text ={ Text("Centimeter")},
                        onClick = { /*TODO*/ })

                    DropdownMenuItem(text ={ Text("meter ")},
                        onClick = { /*TODO*/ })


                    DropdownMenuItem(text ={ Text("feet")},
                        onClick = { /*TODO*/ })

                    DropdownMenuItem(text ={ Text("milimeter")},
                        onClick = { /*TODO*/ })
                }
            }

        }
        Spacer(modifier = Modifier.height(10.dp))
        Text(text = "Result")
    }

}

