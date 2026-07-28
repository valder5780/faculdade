package com.neto.school.controllers;

import com.neto.school.models.SchoolModel;
import com.neto.school.services.SchoolService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.*;

import java.util.List;

@RestController
@RequestMapping
public class SchoolController {
    @Autowired
    private SchoolService schoolService;

    @GetMapping
    public List<SchoolModel> findAll() {
        return schoolService.findAll();
    }

    @PostMapping
    public SchoolModel criarEscola(@RequestBody SchoolModel schoolModel){
        return schoolService.criarEscola(schoolModel);
    }

    @DeleteMapping("/id")
    public void deletar(@PathVariable Long id){
        schoolService.deletar(id);
    }
}
