package com.neto.school.repositories;

import com.neto.school.models.SchoolModel;
import org.springframework.data.jpa.repository.JpaRepository;

public interface SchoolRepository extends JpaRepository<SchoolModel, Long> {
}
