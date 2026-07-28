package com.neto.school.services;


import com.neto.school.repositories.SchoolRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import com.neto.school.models.SchoolModel;

import java.util.List;

@Service

public class SchoolService {

    @Autowired
    private SchoolRepository schoolRepository;

    //GET BUSCAR LISTA DE ESCOLAS
    public List<SchoolModel> findAll() {
        return schoolRepository.findAll();
    }

    //POST CRIAR ESCOLA
    public SchoolModel criarEscola(SchoolModel schoolModel){
        return schoolRepository.save(schoolModel);
    }

    public void deletar(Long id) {
        schoolRepository.deleteById(id);
    }




}
