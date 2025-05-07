using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using crud.Data;
using crud.Models;
using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;

namespace crud.Controllers
{
    [ApiController]
    [Route("api/[controller]")]
    public class PersonsController : ControllerBase
    {
        private readonly AppDbContext _appDbContext;

        public PersonsController(AppDbContext appDbContext)
        {
            _appDbContext = appDbContext;
        }

        [HttpPost]

        public async Task<IActionResult> AddPerson(Person person)
        {
            _appDbContext.DB.Add(person);
            await _appDbContext.SaveChangesAsync();

            return Ok(person);
        }

        [HttpGet]

        public async Task<ActionResult<IEnumerable<Person>>> GetPersons()
        {
            var persons = await _appDbContext.DB.ToListAsync();

            return Ok(persons);
        }

        [HttpGet("{id}")]

        public async Task<ActionResult<Person>> GetPersons(int id)
        {
            var persons = await _appDbContext.DB.FindAsync(id);

            if (persons == null) 
            {
                return NotFound("Person nao encontrado Get[id]");
            }

            return Ok(persons);
        }

        [HttpPut("{id}")]

        public async Task<IActionResult> UpdatePerson(int id, [FromBody] Person personUpdate)
        {
            var existPerson = await _appDbContext.DB.FindAsync(id);

            if(existPerson == null) {
                return NotFound("Person nao encontro Update");
            }

            // _appDbContext.Entry(existPerson).CurrentValues.SetValues(personUpdate);
            existPerson.Nome = personUpdate.Nome;
            existPerson.Tipo = personUpdate.Tipo;
            
            await _appDbContext.SaveChangesAsync();

            return Ok(existPerson);
        }

        [HttpDelete("{id}")]

        public async Task<IActionResult> DeletePerson(int id)
        {
            var persons = await _appDbContext.DB.FindAsync(id);

            if(persons == null) {
                return NotFound("Person nao encontro Delete");
            }

            _appDbContext.DB.Remove(persons);

            await _appDbContext.SaveChangesAsync();

            return Ok("Person deletado com sucesso");
        }
    }
}